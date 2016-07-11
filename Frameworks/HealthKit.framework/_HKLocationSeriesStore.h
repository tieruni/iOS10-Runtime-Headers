/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKLocationSeriesStore : NSObject {
    NSMutableArray * _activeArray;
    HKLocationSeriesSample * _activeSample;
    id /* block */  _loadingCompletionBlock;
    long long  _loadingCount;
    NSObject<OS_dispatch_queue> * _locationQueue;
    NSMutableDictionary * _restoredLocations;
    NSMutableDictionary * _restoredSeries;
}

- (void).cxx_destruct;
- (void)_queue_checkAndReturnIfLocationsLoaded;
- (id)_queue_locations;
- (void)_restoreLocationSeries:(id)arg1 withHealthStore:(id)arg2;
- (void)_setLocations:(id)arg1 forUUID:(id)arg2;
- (void)didUpdateActiveLocationSeries:(id)arg1;
- (void)didUpdateLocation:(id)arg1;
- (void)fetchRestoredLocationsWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)locations;
- (id)samples;
- (void)setRestoredLocationSeriesSamples:(id)arg1;

@end