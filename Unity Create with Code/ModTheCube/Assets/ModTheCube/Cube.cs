using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cube : MonoBehaviour
{
    private GameObject cube;
    private MeshRenderer renderer;
    private Material material;

    public bool bigger = true;
    private float r;
    private float g;
    private float b;
    private float a;
    public Color color;

    private float count = 0;


    void Start()
    {
        cube = this.gameObject;
        transform.position = new Vector3(3, 4, 1);
        transform.localScale = Vector3.one * 1.3f;

        renderer = cube.GetComponent<MeshRenderer>();

        material = renderer.material;

        r = Random.Range(0, 1f);
        g = Random.Range(0, 1f);
        b = Random.Range(0, 1f);
        a = Random.Range(0, 1f);

        color = new Color(r, g, b, a);

        material.color = color;

    }
    
    void Update()
    {
        if (count>= 2)
        {
            Debug.Log("Color change");
            r = Random.Range(0, 1f);
            g = Random.Range(0, 1f);
            b = Random.Range(0, 1f);
            a = Random.Range(0, 1f);
            color = new Color(r, g, b, a);
            count = 0;
        }
        count += Time.deltaTime;

        transform.Rotate(10.0f * Time.deltaTime, 0.0f, 0.0f);

        if (bigger)
        {
            transform.localScale += Vector3.one * .5f * Time.deltaTime;
        }
        else
        {
            transform.localScale -= Vector3.one * .5f * Time.deltaTime;

        }
        if (transform.localScale.x > 3)
        {
            bigger = false;
        }

        else if (transform.localScale.x < 1)
        {
            bigger = true;
        }

        material.color = Color.Lerp(material.color, color, Time.deltaTime);



    }
}
