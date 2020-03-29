//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CKScrollView.h"

#import "CKListInterface-Protocol.h"
#import "CKScrollViewProtocol-Protocol.h"
#import "CKWidgetProtocol-Protocol.h"
#import "CRWidgetProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface CRScrollView : CKScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate, CKListInterface, CRWidgetProtocol, CKWidgetProtocol, CKScrollViewProtocol>
{
    struct vector<CKStyleRect, std::__1::allocator<CKStyleRect>> _items;
    NSMutableDictionary *_cells;
    _Bool _canFireScrollToUpper;
    _Bool _canFireScrollToLower;
    _Bool _pageScrollRoot;
    _Bool _hasScrolled;
    _Bool _initialScrollAnimation;
    _Bool _careRootOffset;
    _Bool _isNoRunlooper;
    _Bool _profilingIgnored;
    int _protocol;
    long long _identifer;
    NSDictionary *_viewData;
    NSMutableDictionary *_bitmaps;
    NSDictionary *_events;
    double _upperThreshold;
    double _lowerThreshold;
    double _offsetAccuracy;
    double _scrollDistance;
    unsigned long long _scrollState;
    NSString *_vNodeID;
    NSString *_wrapperViewID;
    NSString *_pageInstanceID;
    long long _msgId;
    double _inputChangeOffset;
    struct CGSize _cr_contentSize;
    struct CGPoint _lastOffset;
    struct CGPoint _careRootOffsetMin;
    struct CGPoint _careRootOffsetMax;
    struct CGRect _inputKeyboardRect;
}

+ (id)createView:(id)arg1 reuse:(id)arg2 size:(struct CGSize)arg3;
+ (id)mq_export_method_async_118;
+ (id)mq_export_method_async_117;
@property(nonatomic) _Bool profilingIgnored; // @synthesize profilingIgnored=_profilingIgnored;
@property(nonatomic) double inputChangeOffset; // @synthesize inputChangeOffset=_inputChangeOffset;
@property(nonatomic) struct CGRect inputKeyboardRect; // @synthesize inputKeyboardRect=_inputKeyboardRect;
@property(nonatomic) _Bool isNoRunlooper; // @synthesize isNoRunlooper=_isNoRunlooper;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) struct CGPoint careRootOffsetMax; // @synthesize careRootOffsetMax=_careRootOffsetMax;
@property(nonatomic) struct CGPoint careRootOffsetMin; // @synthesize careRootOffsetMin=_careRootOffsetMin;
@property(nonatomic) _Bool careRootOffset; // @synthesize careRootOffset=_careRootOffset;
@property(nonatomic) _Bool initialScrollAnimation; // @synthesize initialScrollAnimation=_initialScrollAnimation;
@property(nonatomic) _Bool hasScrolled; // @synthesize hasScrolled=_hasScrolled;
@property(nonatomic) _Bool pageScrollRoot; // @synthesize pageScrollRoot=_pageScrollRoot;
@property(nonatomic) int protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSString *pageInstanceID; // @synthesize pageInstanceID=_pageInstanceID;
@property(copy, nonatomic) NSString *wrapperViewID; // @synthesize wrapperViewID=_wrapperViewID;
@property(copy, nonatomic) NSString *vNodeID; // @synthesize vNodeID=_vNodeID;
@property(nonatomic) unsigned long long scrollState; // @synthesize scrollState=_scrollState;
@property(nonatomic) _Bool canFireScrollToLower; // @synthesize canFireScrollToLower=_canFireScrollToLower;
@property(nonatomic) _Bool canFireScrollToUpper; // @synthesize canFireScrollToUpper=_canFireScrollToUpper;
@property(nonatomic) double scrollDistance; // @synthesize scrollDistance=_scrollDistance;
@property(nonatomic) struct CGPoint lastOffset; // @synthesize lastOffset=_lastOffset;
@property(nonatomic) double offsetAccuracy; // @synthesize offsetAccuracy=_offsetAccuracy;
@property(nonatomic) double lowerThreshold; // @synthesize lowerThreshold=_lowerThreshold;
@property(nonatomic) double upperThreshold; // @synthesize upperThreshold=_upperThreshold;
@property(retain, nonatomic) NSDictionary *events; // @synthesize events=_events;
@property(retain, nonatomic) NSMutableDictionary *bitmaps; // @synthesize bitmaps=_bitmaps;
@property(retain, nonatomic) NSDictionary *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) long long identifer; // @synthesize identifer=_identifer;
@property(nonatomic) struct CGSize cr_contentSize; // @synthesize cr_contentSize=_cr_contentSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)responseTextareaBoundsChanged:(id)arg1;
- (void)responseKeyboardWillHide:(id)arg1;
- (void)responseKeyboardWillShow:(id)arg1;
- (void)responseKeyboardWillChangeFrame:(id)arg1;
- (void)showInputViewRect;
- (void)removeSupportedInputNotifications;
- (void)addSupportedInputNotifications;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)scrollViewFinishScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)eventParamsWithScrollView:(id)arg1;
- (struct CGPoint)scrollOffset;
- (_Bool)didBindEvent:(id)arg1;
- (void)updateExtParam:(id)arg1;
- (void)resetCss;
- (void)resetAttrs;
- (void)reset;
- (void)updateComponentData:(id)arg1;
- (void)updateEvents:(id)arg1;
- (void)updateAttrs:(id)arg1;
- (void)updateCss:(id)arg1;
- (_Bool)resumeEnable;
- (void)resumeWithData:(id)arg1;
- (void)willResume;
- (double)incisionForIndex:(int)arg1;
- (int)numberOfRows;
- (void)showLayer:(id)arg1 index:(int)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)removeCell:(id)arg1;
- (void)scrollLeft:(id)arg1;
- (void)scrollTop:(id)arg1;
- (void)bindContents:(struct CGRect)arg1 index:(int)arg2 cellId:(long long)arg3 imageRef:(struct CGImage *)arg4;
- (void)bindData:(id)arg1;
- (void)triggerScrollRefresh:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
