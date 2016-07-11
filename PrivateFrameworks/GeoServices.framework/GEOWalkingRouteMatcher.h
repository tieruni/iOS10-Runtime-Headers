/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWalkingRouteMatcher : GEORouteMatcher {
    unsigned long long  _newStepProgressions;
}

- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousMatchGood:(bool)arg3;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;

@end