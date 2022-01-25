using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileController : MonoBehaviour
{

    public int status = 0;

    GameObject tileObject;
    Color whateverColor = new Color(0, 0, 255, 1);
    MeshRenderer tileRenderer;

    void Start()
    {
        tileObject = this.gameObject;
        tileRenderer = tileObject.GetComponent<MeshRenderer>();

    }

    // Update is called once per frame
    void Update()
    {
        switch (status)
        {
            case 1:
                tileRenderer.material.color = Color.blue;
                break;
            default:
                break;
        }

    }
}
