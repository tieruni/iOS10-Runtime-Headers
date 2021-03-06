/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPDFView : UIView <UIDocumentPasswordViewDelegate, UIPDFAnnotationControllerDelegate, UIPDFPageViewDelegate, WKActionSheetAssistantDelegate, WKWebViewContentProvider, _WKWebViewPrintProvider> {
    struct RetainPtr<WKActionSheetAssistant> { 
        void *m_ptr; 
    }  _actionSheetAssistant;
    struct unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> > { 
        struct __compressed_pair<WebKit::ApplicationStateTracker *, std::__1::default_delete<WebKit::ApplicationStateTracker> > { 
            struct ApplicationStateTracker {} *__first_; 
        } __ptr_; 
    }  _applicationStateTracker;
    struct Vector<WTF::RetainPtr<UIPDFSelection>, 0, WTF::CrashOnOverflow, 16> { 
        struct RetainPtr<UIPDFSelection> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _cachedFindMatches;
    unsigned int  _cachedFindMaximumCount;
    unsigned long long  _cachedFindOptionsAffectingResults;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _cachedFindString;
    unsigned int  _centerPageNumber;
    struct RetainPtr<CGPDFDocument *> { 
        void *m_ptr; 
    }  _cgPDFDocument;
    unsigned int  _currentFindMatchIndex;
    unsigned int  _currentFindPageIndex;
    struct RetainPtr<UIPDFSelection> { 
        void *m_ptr; 
    }  _currentFindSelection;
    NSObject<OS_dispatch_queue> * _findQueue;
    UIView * _fixedOverlayView;
    bool  _isPerformingSameDocumentNavigation;
    bool  _isStartingZoom;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    unsigned int  _nextCachedFindMaximumCount;
    unsigned long long  _nextCachedFindOptionsAffectingResults;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _nextCachedFindString;
    struct atomic<unsigned int> { 
        unsigned int __a_; 
    }  _nextComputeMatchesOperationID;
    struct CGSize { 
        double width; 
        double height; 
    }  _overlaidAccessoryViewsInset;
    struct RetainPtr<WKPDFPageNumberIndicator> { 
        void *m_ptr; 
    }  _pageNumberIndicator;
    struct Vector<PDFPageInfo, 0, WTF::CrashOnOverflow, 16> { 
        struct { /* ? */ } *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _pages;
    struct RetainPtr<UIDocumentPasswordView> { 
        void *m_ptr; 
    }  _passwordView;
    struct RetainPtr<UIPDFDocument> { 
        void *m_ptr; 
    }  _pdfDocument;
    struct InteractionInformationAtPosition { 
        struct IntPoint { 
            int m_x; 
            int m_y; 
        } point; 
        bool nodeAtPositionIsAssistedNode; 
        bool isSelectable; 
        bool isNearMarkedText; 
        bool touchCalloutEnabled; 
        bool isLink; 
        bool isImage; 
        bool isAttachment; 
        bool isAnimatedImage; 
        bool isElement; 
        bool isDataDetectorLink; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } url; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } imageURL; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } title; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } idAttribute; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } bounds; 
        struct RefPtr<WebKit::ShareableBitmap> { 
            struct ShareableBitmap {} *m_ptr; 
        } image; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } textBefore; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } textAfter; 
        struct TextIndicatorData { 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } selectionRectInRootViewCoordinates; 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } textBoundingRectInRootViewCoordinates; 
            struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { 
                struct FloatRect {} *m_buffer; 
                unsigned int m_capacity; 
                unsigned int m_size; 
            } textRectsInBoundingRectCoordinates; 
            float contentImageScaleFactor; 
            struct RefPtr<WebCore::Image> { 
                struct Image {} *m_ptr; 
            } contentImageWithHighlight; 
            struct RefPtr<WebCore::Image> { 
                struct Image {} *m_ptr; 
            } contentImage; 
            int presentationTransition; 
            unsigned char options; 
        } linkIndicator; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } dataDetectorIdentifier; 
        struct RetainPtr<NSArray> { 
            void *m_ptr; 
        } dataDetectorResults; 
    }  _positionInformation;
    UIScrollView * _scrollView;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _suggestedFilename;
    struct RetainPtr<UIWKSelectionAssistant> { 
        void *m_ptr; 
    }  _webSelectionAssistant;
    WKWebView * _webView;
}

@property (nonatomic, readonly) struct CGPDFDocument { }*_wk_printedDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackground;
@property (nonatomic, readonly) struct CGPDFDocument { }*pdfDocument;
@property (nonatomic, readonly) NSString *suggestedFilename;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_URLForLinkAnnotation:(id)arg1;
- (void)_applicationDidCreateWindowContext;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;
- (void)_applicationWillEnterForeground;
- (void)_clearPages;
- (void)_computeMatchesForString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_computePageAndDocumentFrames;
- (void)_didFailToUnlock;
- (void)_didFindMatch:(id)arg1;
- (void)_didLoadPDFDocument;
- (void)_ensureViewForPage:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct RetainPtr<UIPDFPageView> { void *x_2_1_1; } x2; struct RetainPtr<UIPDFPage> { void *x_3_1_1; } x3; unsigned int x4; }*)arg1;
- (void)_hidePasswordEntryField;
- (void)_highlightLinkAnnotation:(id)arg1 forDuration:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)_keyboardDidShow:(id)arg1;
- (struct CGPoint { double x1; double x2; })_offsetForPageNumberIndicator;
- (void)_resetZoomAnimated:(bool)arg1;
- (void)_revalidateViews;
- (void)_scrollToFragment:(id)arg1;
- (void)_showPasswordEntryField;
- (bool)_tryToUnlockWithPassword:(id)arg1;
- (void)_updatePageNumberIndicator;
- (void)_updatePasswordEntryField;
- (unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1;
- (struct CGPDFDocument { }*)_wk_printedDocument;
- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
- (void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(id)arg3;
- (void)dealloc;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didMoveToWindow;
- (bool)isBackground;
- (struct CGPDFDocument { }*)pdfDocument;
- (const struct InteractionInformationAtPosition { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_13_1_1; } x13; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_14_1_1; } x14; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_15_1_1; } x15; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_16_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_16_1_2; } x16; struct RefPtr<WebKit::ShareableBitmap> { struct ShareableBitmap {} *x_17_1_1; } x17; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_18_1_1; } x18; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_19_1_1; } x19; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_20_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_20_1_2; struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { struct FloatRect {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_20_1_3; float x_20_1_4; struct RefPtr<WebCore::Image> { struct Image {} *x_5_2_1; } x_20_1_5; struct RefPtr<WebCore::Image> { struct Image {} *x_6_2_1; } x_20_1_6; int x_20_1_7; unsigned char x_20_1_8; } x20; }*)positionInformationForActionSheetAssistant:(id)arg1;
- (void)resetZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)suggestedFilename;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)web_computedContentInsetDidChange;
- (void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_hideFindUI;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { double x1; double x2; })arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 kind:(int)arg4;

@end
