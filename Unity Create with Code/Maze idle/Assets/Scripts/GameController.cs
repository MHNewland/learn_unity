using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{

    Ray touchRay;
    Vector2 touchPos;

    private static readonly float PanSpeed = 7.5f;
    private static readonly float ZoomSpeedTouch = 0.1f;
    private static readonly float ZoomSpeedMouse = 0.5f;

    private static readonly float[] BoundsX = new float[] { -10f, 50f };
    private static readonly float[] BoundsY = new float[] { -20f, 40f };
    private static readonly float[] ZoomBounds = new float[] { 10f, 1000f };

    public GameObject cam;

    private Vector3 lastPanPosition;
    private bool wasPanningLastFrame =false;
    private int panFingerId; // Touch mode only

    private bool wasZoomingLastFrame; // Touch mode only
    private Vector2[] lastZoomPositions; // Touch mode only

    void Start()
    {
        cam = GameObject.Find("Main Camera");
    }

    // Update is called once per frame
    void Update()
    {
        HandleTouch();

        if (Input.GetKey(KeyCode.UpArrow)) {
            cam.transform.Translate(0, Time.deltaTime * PanSpeed, 0);
        }
        else if (Input.GetKey(KeyCode.RightArrow)) {
            cam.transform.Translate(Time.deltaTime * PanSpeed, 0, 0);
        }
        else if (Input.GetKey(KeyCode.DownArrow)) {
                cam.transform.Translate(0, -Time.deltaTime * PanSpeed, 0);
        }
        else if (Input.GetKey(KeyCode.LeftArrow))
        {
            cam.transform.Translate(-Time.deltaTime * PanSpeed, 0, 0);

        }
    }

    void HandleTouch()
    {
        //only start this when a touch is detected
        switch (Input.touchCount)
        {
            
            case 1: // Panning or touch
                wasZoomingLastFrame = false;
                Debug.Log("was Panning" + wasPanningLastFrame);
                // If the touch began, capture its position and its finger ID.
                // Otherwise, if the finger ID of the touch doesn't match, skip it.
                Touch touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Began)
                {
                    lastPanPosition = touch.position;
                    panFingerId = touch.fingerId;
                    
                }
                else if (touch.fingerId == panFingerId && touch.phase == TouchPhase.Moved)
                {
                    wasPanningLastFrame = true;
                    PanCamera(touch.position);
                }
                else if (touch.phase == TouchPhase.Ended)
                {
                    if (!wasPanningLastFrame)
                    {
                        touchRay = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                        Debug.Log("touch position: " + Input.GetTouch(0).position.x + ", " + Input.GetTouch(0).position.y);
                        RaycastHit hitObject;

                        Debug.DrawRay(touchRay.origin, touchRay.direction * 100, Color.yellow, 100f);


                        if (Physics.Raycast(touchRay, out hitObject))
                        {
                            Debug.Log(hitObject.transform.name);
                            if (hitObject.collider != null)
                            {
                                //We should have hit something with a 2D Physics collider!
                                GameObject touchedObject = hitObject.transform.gameObject;
                                //touchedObject should be the object someone touched.
                                Debug.Log("Touched " + touchedObject.transform.name);
                                touchedObject.GetComponent<TileController>().status += 1;
                            }
                        }
                    }
                    else wasPanningLastFrame = false;
                }
                break;

            case 2: // Zooming
                Debug.Log("2 touches detected");
                Vector2[] newPositions = new Vector2[] { Input.GetTouch(0).position, Input.GetTouch(1).position };
                if (!wasZoomingLastFrame)
                {
                    lastZoomPositions = newPositions;
                    wasZoomingLastFrame = true;
                }
                else
                {
                    // Zoom based on the distance between the new positions compared to the 
                    // distance between the previous positions.
                    float newDistance = Vector2.Distance(newPositions[0], newPositions[1]);
                    float oldDistance = Vector2.Distance(lastZoomPositions[0], lastZoomPositions[1]);
                    float offset = newDistance - oldDistance;

                    ZoomCamera(offset, ZoomSpeedTouch);

                    lastZoomPositions = newPositions;
                }
                break;

            default:
                wasZoomingLastFrame = false;
                break;
        }
    }

    void PanCamera(Vector3 newPanPosition)
    {

        //Debug.Log("lastPanPosition "+lastPanPosition);
        //Debug.Log("newPanPosition "+ newPanPosition);
        // Determine how much to move the camera
        //Debug.Log("offset amount" + (lastPanPosition - newPanPosition));
        Vector3 offset = cam.GetComponent<Camera>().ScreenToViewportPoint(lastPanPosition - newPanPosition);
        //Debug.Log("Offset" + offset);
        Vector3 move = new Vector3(offset.x * PanSpeed, offset.y *PanSpeed, 0);
        //Debug.Log("move " + move);

        // Perform the movement
        cam.transform.Translate(move);

        // Ensure the camera remains within bounds.
        /*Vector3 pos = cam.transform.position;
        Debug.Log("pos before" + pos);
        pos.x = Mathf.Clamp(transform.position.x, BoundsX[0], BoundsX[1]);
        pos.y = Mathf.Clamp(transform.position.y, BoundsY[0], BoundsY[1]);
        Debug.Log("pos after" + pos);

        cam.transform.position = pos;
        Debug.Log("cam position" +cam.transform.position);*/

        // Cache the position
        lastPanPosition = newPanPosition;
    }

    void ZoomCamera(float offset, float speed)
    {
        if (offset == 0)
        {
            return;
        }

        
    }
}







/*


        switch (Input.GetTouch(0).phase)
        {
            case TouchPhase.Began:
                touchPos = Input.GetTouch(0).position;
                break;
            case TouchPhase.Ended:
                {
                    Debug.Log("touched screen");

                    //We transform the touch position into word space from screen space and store it.
                    touchRay = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                    Debug.Log("touch position: " + Input.GetTouch(0).position.x + ", " + Input.GetTouch(0).position.y);
                    RaycastHit hitObject;

                    Debug.DrawRay(touchRay.origin, touchRay.direction * 100, Color.yellow, 100f);


                    if (Physics.Raycast(touchRay, out hitObject))
                    {
                        Debug.Log(hitObject.transform.name);
                        if (hitObject.collider != null)
                        {
                            //We should have hit something with a 2D Physics collider!
                            GameObject touchedObject = hitObject.transform.gameObject;
                            //touchedObject should be the object someone touched.
                            Debug.Log("Touched " + touchedObject.transform.name);
                            touchedObject.GetComponent<TileController>().status += 1;
                        }
                    }
                }
                break;
            default:
                break;
        }
        */