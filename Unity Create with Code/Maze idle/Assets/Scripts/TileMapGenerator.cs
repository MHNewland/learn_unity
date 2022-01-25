using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileMapGenerator : MonoBehaviour
{
    public GameObject tilePrefab;
    int mapWidth = 8;
    int mapHeight = 8;

    float tileOffset = 1.01f;

    void Start()
    {
        CreateQuadTileMap();
    }

    void CreateQuadTileMap()
    {
        for(int row=0; row <= mapHeight; row++)
        {
            for (int column = 0; column <= mapWidth; column++)
            {
                GameObject tempGO = Instantiate(tilePrefab, this.transform);

                //to offset golumns, X must be changed
                //to offset rows, y must be changed
                tempGO.transform.position = new Vector2(column * tileOffset, row * tileOffset);

                tempGO.name = "Tile (" + row +", " + column + ")";

            }
        }
    }

}
