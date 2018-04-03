# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Results / Reflections
#### Components of pid

Having knowledge of each part of "PID" is important. All parts of PID control steer angle by the cross-track error (CTE), but all parts make this differently:
* The "P" for proportional means that the car will steer in proportion to the cross-track error, or CTE.
* The "I" for integral sums up all CTEs up to that point, such that too many negative CTEs  will drive up this value, causing the car to turn back toward the middle, preventing the car from driving on one side of the lane the whole time. If the coefficient is too high for I, the car tends to have quicker oscillations, and does not tend to get up to a quick speed. A low coefficent for I will cause the car to tend to drift to one side of the lane or the other for longer periods of time.
* The "D" for derivate is the change in CTE from one value to the next. This means that 1) if the derivative is quickly changing, the car will correct itself (i.e. higher steering angle) faster, such as in the case of a curve, and 2) if the car is moving outward from the middle, this will cause the steering to get larger (as the derivative sign will match the proportional sign), but if the car is moving toward the center (meaning the derivative value will be negative), the car's steering angle will get smoothed out, leading to a more smoother driving experience. Too high of a coefficient leads to almost constant steering angle changes of large degrees, where although the car will be well-centered it can hardly move. Too low of a D coefficient will lead to the oscillations being too high with more overshooting.

#### Finding the right coefficient
I choosed the most simple path and find coefficients by manual tuning. This path have some advantages for understanding how different parts influence on car steer controling, why happen some fluctuations, slow reacting on cte error and e.t.c.

#### PID controller for throttle
For throttle I also used PID controller. Approach is very simple, if cte of car is high (car drive out from the middle of road), throttle become negative and car on low speed turn to the middle of road. Params of PID components I also found manually.

