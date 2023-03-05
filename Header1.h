#ifndef HEADER1_H
#define HEADER1_H

#include <iostream>
#include <cmath>
using namespace std;
class Point 
{
    public: // Default Constructor, sets X = Y = 0
    Point() 
    {
        x = 0.0;
        y = 0.0;
    }
    
    // Constructor. Initializes both X and Y.
    Point(float x_val, float y_val) 
    {
        x = x_val;
        y = y_val;
    }
    
    // Set X value
    void setx(float n) 
    {
        x = n;
    }
    
    // Set Y value
    void sety(float n) 
    {
        y = n;
    }
    
    // Get X value
    float getX() 
    {
        return x;
    }
    
    // Get Y value
    float getY() 
    {
        return y;
    }
    
    // Display point as (X , Y)
    void CoutPoint() 
    {
        cout << "Current point: (" << x << "," << y << ")";
    }
    
    // distance between current point object and another point p
    void Dis(float a[]) 
    {
        float distance;
        distance = sqrt((a[0] - x) * (a[0] - x) + (a[1] - y) * (a[1] - y));
        cout << "Distance: " << distance;
    }
    
    void Center(float* cent, int n)
    {
        float aSum = 0.0;
        float bSum = 0.0;
        for (int i = 0; i < n; i += 2) 
        {
            aSum += cent[i];
            bSum += cent[i + 1];
        }
        setx(aSum / (n / 2));
        sety(bSum / (n / 2));
    }

    
    void Assign(float x1, float y1, float x2, float y2, float p[], float z) 
    {
        for (int i = 0; i < z; i += 2) 
        {
            if (sqrt((x1 - p[i]) * (x1 - p[i]) + (y1 - p[i + 1]) * (y1 - p[i + 1])) >
                sqrt((x2 - p[i]) * (x2 - p[i]) + (y2 - p[i + 1]) * (y2 - p[i + 1]))) 
                {
                    cout << "Point (" << p[i] << "," << p[i + 1] << ") is assigned to cluster B" << endl;
                }
                else 
                {
                    cout << "Point (" << p[i] << "," << p[i + 1] << ") is assigned to cluster A" << endl;
                }
        }
    }
    
    private:
    // Data members x and y
    float x;
    float y;
};

#endif 
