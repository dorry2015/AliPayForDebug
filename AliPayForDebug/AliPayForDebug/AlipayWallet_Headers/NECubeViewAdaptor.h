//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXECubeViewBase.h"

#import "NXEngineView-Protocol.h"

@class NSString, NXEngineViewParam, RVKContentView, RVKKernel, RVKPage;
@protocol NXEngineViewDelegate;

@interface NECubeViewAdaptor : NXECubeViewBase <NXEngineView>
{
    RVKContentView *_contentView;
    RVKPage *_pageOverride;
    NXEngineViewParam *_viewParam;
    RVKKernel<NXEngineViewDelegate> *_delegate;
}

@property(nonatomic) __weak RVKKernel<NXEngineViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NXEngineViewParam *viewParam; // @synthesize viewParam=_viewParam;
@property(retain, nonatomic) RVKPage *pageOverride; // @synthesize pageOverride=_pageOverride;
@property(retain, nonatomic) RVKContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (_Bool)canHandleCreateView:(id)arg1 result:(id *)arg2;
- (id)adapterTag;
- (long long)pageRenderType;
- (void)cancelInjectJS;
- (void)loadRequest;
- (void)dealloc;
- (id)viewId;
- (_Bool)dispatchEvent:(id)arg1;
- (void)commonInit;
- (id)page;
- (id)createCubeView:(id)arg1;
- (_Bool)shouldListenScrollView;
- (id)initWithParams:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
