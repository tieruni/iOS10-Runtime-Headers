/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSSystemServiceClient : SBSServiceFacilityClient {
    bool  _buttonEventServiceIsWaitingForServerMessages;
}

+ (id)serviceFacilityIdentifier;

- (void)_handleButtonEventConsumePressMessage:(id)arg1;
- (void)acquireAssertionOfType:(long long)arg1 forReason:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchUnlockCredentialSetWithCompletion:(id /* block */)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)setButtonEventServiceIsWaitingForServerMessages:(bool)arg1;
- (void)setEventMask:(unsigned long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;

@end
