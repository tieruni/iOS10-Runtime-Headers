/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSUserActivity;

@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate> {
    NSUserActivity *_activity;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(copy) id completionHandler;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)startScan;
- (void)fireCompletionHandler;
- (void).cxx_destruct;
- (void)userActivityWasContinued:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;

@end