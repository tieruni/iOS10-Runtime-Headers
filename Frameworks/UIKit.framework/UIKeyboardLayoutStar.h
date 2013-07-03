/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBRenderConfig, UIView<UIKeyboardRivenTransitionView>, UISwipeGestureRecognizer, UIDelayedAction, UIKBBackgroundView, NSMutableSet, UIView, UIKBKeyplaneView, UIKBTree, CADisplayLink, NSString, NSMutableDictionary, NSTimer;

@interface UIKeyboardLayoutStar : UIKeyboardLayout  {
    UIKBTree *_keyboard;
    UIKBTree *_keyplane;
    NSString *_keyboardName;
    NSString *_keyplaneName;
    int _appearance;
    UIKBTree *_activeKey;
    UIKBKeyplaneView *_keyplaneView;
    UIKBBackgroundView *_backgroundView;
    double _prevTouchUpTime;
    double _prevTouchDownTime;
    int _prevUpActions;
    NSMutableDictionary *_keyboards;
    NSMutableDictionary *_allKeyplaneViews;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableSet *_validInputStrings;
    NSString *_localizedInputKey;
    struct __CFDictionary { } *_extendedTouchInfoMap;
    int _preferredTrackingChangeCount;
    int _shiftTrackingChangeCount;
    NSMutableSet *_accentInfo;
    NSMutableSet *_hasAccents;
    id _spaceTarget;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _returnTarget;
    SEL _returnAction;
    SEL _returnLongAction;
    id _deleteTarget;
    SEL _deleteAction;
    SEL _deleteLongAction;
    BOOL _shift;
    BOOL _autoshift;
    BOOL _settingShift;
    BOOL _didLongPress;
    NSString *_preTouchKeyplaneName;
    BOOL _revertKeyplaneAfterTouch;
    BOOL _wasShifted;
    BOOL _swipeDetected;
    BOOL _showIntlKey;
    BOOL _showDictationKey;
    BOOL _shiftLockReady;
    double _shiftLockFirstTapTime;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    UIView<UIKeyboardRivenTransitionView> *_transitionView;
    float _initialSplitProgress;
    float _finalSplitProgress;
    float _initialPinchSeparation;
    float _pinchSeparationValues[4];
    BOOL _pinchDetected;
    double _autoSplitLastUpdate;
    float _autoSplitElapsedTime;
    CADisplayLink *_displayLink;
    BOOL _ghostKeysEnabled;
    UIDelayedAction *_delayedCentroidUpdate;
    BOOL _isRebuilding;
    BOOL _preRotateShift;
    NSString *_preRotateKeyplaneName;
    struct CGPoint { 
        float x; 
        float y; 
    } _keyPeripheralInset;
    UIDelayedAction *_multitapAction;
    BOOL _unshiftAfterMultitap;
    int _multitapCount;
    UIKBTree *_multitapKey;
    UIView *_flickPopupView;
    NSMutableDictionary *_compositeImages;
    NSTimer *_flickPopuptimer;
    id _touchInfo;
    UIView *_dimKeyboardImageView;
    BOOL _keyboardImageViewIsDim;
    BOOL _isOutOfBounds;
    int playKeyClickSoundOn;
    UIKBRenderConfig *_renderConfig;
}

@property(readonly) UIKBTree * keyboard;
@property(readonly) UIKBTree * keyplane;
@property(copy) NSString * keyboardName;
@property(copy) NSString * keyplaneName;
@property(readonly) NSString * localizedInputMode;
@property(copy) NSString * localizedInputKey;
@property(retain) UIKBTree * activeKey;
@property BOOL shift;
@property BOOL autoShift;
@property BOOL didLongPress;
@property(getter=isRotating,readonly) BOOL rotating;
@property BOOL showIntlKey;
@property(readonly) BOOL showDictationKey;
@property(copy) NSString * preTouchKeyplaneName;
@property(retain) UIKBRenderConfig * renderConfig;
@property int playKeyClickSoundOn;

+ (id)keyboardWithName:(id)arg1 screen:(id)arg2;
+ (id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2;
+ (struct CGSize { float x1; float x2; })keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (BOOL)isAlphabeticPlane;
- (BOOL)canMultitap;
- (BOOL)hasAccentKey;
- (void)dealloc;
- (id)overlayCharacterImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 flickString:(id)arg4 popupInfo:(id)arg5;
- (id)getPopupBackgroundImageForKey:(id)arg1 direction:(int)arg2 popupInfo:(id)arg3 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)getFlickCompositeImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setKeyboardDim:(BOOL)arg1 amount:(float)arg2 withDuration:(float)arg3;
- (void)handleDismissFlickView;
- (void)handlePopupView;
- (void)setCompositeImage:(id)arg1 forKey:(id)arg2;
- (id)compositeImageForKey:(id)arg1;
- (void)activateCompositeKey:(id)arg1 direction:(int)arg2 flickString:(id)arg3 popupInfo:(id)arg4;
- (void)populateFlickPopupsForKey:(id)arg1;
- (void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3;
- (void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4;
- (void)setKeyForTouchInfo:(id)arg1 key:(id)arg2;
- (id)popupKeyViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLastKeyWithRepresentedString:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeyWithRepresentedString:(id)arg1;
- (id)localizedInputKey;
- (void)setShowIntlKey:(BOOL)arg1;
- (void)setDidLongPress:(BOOL)arg1;
- (BOOL)didLongPress;
- (void)setAutoShift:(BOOL)arg1;
- (BOOL)autoShift;
- (BOOL)shift;
- (void)setKeyboardName:(id)arg1;
- (void)handleDelayedCentroidUpdate;
- (struct CGImage { }*)renderedKeyplaneWithToken:(id)arg1 split:(BOOL)arg2;
- (struct CGImage { }*)renderedImageWithToken:(id)arg1;
- (struct CGPoint { float x1; float x2; })applyError:(struct CGPoint { float x1; float x2; })arg1 toKey:(id)arg2;
- (id)keyboard;
- (BOOL)keyHasAccentedVariants:(id)arg1;
- (void)cancelTouchIfNecessaryForInfo:(id)arg1;
- (void)swipeDetected:(id)arg1;
- (void)updateShiftKeyState;
- (void)upActionShift;
- (void)completeSendStringActionForTouchUp:(id)arg1 withActions:(int)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(int)arg6;
- (id)flickStringForInputKey:(id)arg1 direction:(int)arg2;
- (void)touchMultitapTimer;
- (BOOL)shouldSendTouchUpToInputManager:(id)arg1;
- (void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4;
- (BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (void)refreshGhostKeyState;
- (unsigned int)upActionFlagsForKey:(id)arg1;
- (void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2;
- (void)handleFlick:(id)arg1;
- (void)interpretTouchesForSplit;
- (id)infoForTouch:(id)arg1;
- (void)deleteActionWithExecutionContext:(id)arg1;
- (void)completeDeleteActionForTouchDownWithActions:(unsigned int)arg1 executionContext:(id)arg2;
- (id)activeTouchForInteraction:(int)arg1;
- (void)downActionShiftWithKey:(id)arg1;
- (id)preTouchKeyplaneName;
- (void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned int)arg2 executionContext:(id)arg3;
- (id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 isPopupVariant:(BOOL)arg3 isMultitap:(BOOL)arg4 isFlick:(BOOL)arg5;
- (void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned int)arg2 executionContext:(id)arg3;
- (BOOL)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned int)arg1;
- (void)playKeyClickSound;
- (BOOL)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (int)playKeyClickSoundOn;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 executionContext:(id)arg3;
- (void)handlePopupView:(id)arg1;
- (id)flickPopupStringForKey:(id)arg1 withString:(id)arg2;
- (void)clearInfoForTouch:(id)arg1;
- (void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 hitKeyHandler:(id)arg3 executionContext:(id)arg4;
- (void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2;
- (id)generateInfoForTouch:(id)arg1;
- (void)_autoSplit:(id)arg1;
- (void)finishSplitTransition;
- (void)finishSplit;
- (float)interpretPinchSeparationValues;
- (void)setPlayKeyClickSoundOn:(int)arg1;
- (void)prepareForSplitTransition;
- (id)_keyplaneVariantsKeyForString:(id)arg1;
- (id)touchForKey:(id)arg1;
- (void)showPopupVariantsForKey:(id)arg1;
- (unsigned int)downActionFlagsForKey:(id)arg1;
- (void)clearHandwritingStrokesIfNeeded;
- (void)handleMultitapTimerFired;
- (void)multitapExpired;
- (void)multitapInterrupted;
- (id)multitapCompleteKey;
- (BOOL)handwritingPlane;
- (BOOL)isLongPressedKey:(id)arg1;
- (id)activeKey;
- (int)keycodeForKey:(id)arg1;
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (id)keyHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestWithoutCharging:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldHitTestKey:(id)arg1;
- (void)setKeyboardDim:(BOOL)arg1;
- (id)initialKeyplaneNameWithKBStarName:(id)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(int)arg2;
- (BOOL)showDictationKey;
- (BOOL)showIntlKey;
- (id)keyWithRepresentedString:(id)arg1;
- (void)updateTransitionWithFlags:(int)arg1;
- (void)rebuildSplitTransitionView;
- (void)updateGlobeKeyDisplayString;
- (int)stateForDictationKey:(id)arg1;
- (int)stateForMultitapReverseKey:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (int)stateForShiftKey:(id)arg1;
- (id)defaultKeyplaneForKeyplane:(id)arg1;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1;
- (id)cacheTokenForKeyplane:(id)arg1;
- (void)updateMoreAndInternationalKeys;
- (void)updateKeyboardForKeyplane:(id)arg1;
- (id)splitNameForKeyplane:(id)arg1;
- (BOOL)canReuseKeyplaneView;
- (BOOL)shouldShowDictationKey;
- (int)stateForKey:(id)arg1;
- (struct CGImage { }*)renderedImageWithStateFallbacksForToken:(id)arg1;
- (void)rebuildSplitTransitionViewFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)updateLocalizedKeysOnKeyplane:(id)arg1;
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (int)displayTypeHintForMoreKey;
- (int)displayTypeHintForShiftKey;
- (void)refreshForRivenPreferences;
- (void)setKeyplaneName:(id)arg1;
- (void)setLocalizedInputKey:(id)arg1;
- (void)updateBackgroundIfNeeded;
- (int)visualStyleForKeyboardIfSplit:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2;
- (id)splitNameForKeyplaneName:(id)arg1;
- (id)defaultNameForKeyplaneName:(id)arg1;
- (void)flushKeyCache:(id)arg1;
- (void)setPreTouchKeyplaneName:(id)arg1;
- (void)setActiveKey:(id)arg1;
- (void)handleDismissFlickView:(id)arg1;
- (void)clearAllTouchInfo;
- (void)cancelDelayedCentroidUpdate;
- (void)cancelMultitapTimer;
- (void)uninstallGestureRecognizers;
- (void)refreshForDictationAvailablityDidChange;
- (id)keyplane;
- (void)installGestureRecognizers;
- (void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2;
- (BOOL)performSpaceAction;
- (BOOL)canForceTouchCommit:(id)arg1;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (SEL)handlerForNotification:(id)arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { float x1; float x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (id)simulateTouch:(struct CGPoint { float x1; float x2; })arg1;
- (void)changeToKeyplane:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)baseKeyForString:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)updateKeyCentroids;
- (id)localizedInputMode;
- (id)keyboardName;
- (id)keyplaneName;
- (void)finishSplitTransitionWithProgress:(float)arg1;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateLocalizedKeys:(BOOL)arg1;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)ignoresShiftState;
- (void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (float)hitBuffer;
- (BOOL)canProduceString:(id)arg1;
- (void)longPressAction;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)restoreDefaultsForAllKeys;
- (void)didClearInput;
- (BOOL)usesAutoShift;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAutoshift:(BOOL)arg1;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2;
- (BOOL)performReturnAction;
- (void)didRotate;
- (void)willRotate;
- (id)activationIndicatorView;
- (BOOL)shouldShowIndicator;
- (void)showSplitTransitionView:(BOOL)arg1;
- (BOOL)pinchSplitGestureEnabled;
- (void)setSplitProgress:(float)arg1;
- (BOOL)pinchDetected;
- (struct CGSize { float x1; float x2; })dragGestureSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (void)deactivateActiveKeys;
- (BOOL)hasCandidateKeys;
- (void)clearUnusedObjects:(BOOL)arg1;
- (id)candidateList;
- (id)renderConfig;
- (void)setKeyboardAppearance:(int)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)isRotating;
- (id)scriptingInfoWithChildren;
- (double)lastTouchUpTimestamp;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setShift:(BOOL)arg1;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityElementsHidden;
- (BOOL)accessibilityPerformEscape;
- (int)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityInternalData;
- (id)_accessibilityCreateElementForKey:(id)arg1;
- (void)_accessibilityResetInternalData;
- (void)_axClearReturnKeyLabel;
- (id)_accessibilityKeys;
- (BOOL)_isCapitalLetterKeyplane:(id)arg1;
- (BOOL)_isSmallLetterKeyplane:(id)arg1;
- (id)_accessibilityKeyElementForKey:(id)arg1;
- (BOOL)_accessibilityFingerIsDown;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibiltyAvailableKeyplanes;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (id)_accessibilityScannerGroupElements;
- (BOOL)_accessibilityIsScannerGroup;
- (int)_accessibilityScannerGroupTraits;

@end