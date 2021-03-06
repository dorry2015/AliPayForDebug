//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OViewController.h"

#import "MAMapViewDelegate-Protocol.h"
#import "O2OCommonSchemeProtocol-Protocol.h"
#import "O2OFilterViewDelegate-Protocol.h"
#import "O2OMapSearchModelDelegate-Protocol.h"
#import "O2OSearchBarDelegate-Protocol.h"

@class MAMapView, NSArray, NSDictionary, NSString, O2OFilterView, O2OMapSearchCurrentAreaSearchView, O2OMapSearchModel, O2OMapSearchShopAnnotation, O2OMapSearchShopsContainerView, O2OMapSearchShopsViewController, O2OSearchBar, UIButton;

@interface O2OMapSearchViewController : O2OViewController <O2OCommonSchemeProtocol, O2OSearchBarDelegate, O2OMapSearchModelDelegate, O2OFilterViewDelegate, MAMapViewDelegate>
{
    _Bool _isNewQuery;
    _Bool _continueSearchInCurrentArea;
    _Bool _loadByAreaSearchBtn;
    _Bool _loadInCurrentArea;
    MAMapView *_mapView;
    O2OSearchBar *_searchBar;
    O2OMapSearchModel *_searchModel;
    O2OMapSearchShopsContainerView *_shopsContainerView;
    O2OMapSearchShopsViewController *_shopsViewController;
    O2OFilterView *_filterView;
    O2OMapSearchCurrentAreaSearchView *_areaSearchView;
    UIButton *_myLocationBtn;
    NSString *_searchType;
    NSDictionary *_paramsMap;
    NSString *_searchContext;
    NSString *_query;
    NSString *_cityCode;
    NSString *_businessAreaId;
    NSString *_searchSrc;
    NSString *_monitorSrc;
    NSDictionary *_monitorDic;
    NSDictionary *_selectedMenus;
    NSArray *_menuGroups;
    NSArray *_filterMenuData;
    NSArray *_items;
    NSArray *_shopAnnotations;
    double _currentZoomLevel;
    O2OMapSearchShopAnnotation *_selectedAnnotation;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) O2OMapSearchShopAnnotation *selectedAnnotation; // @synthesize selectedAnnotation=_selectedAnnotation;
@property(nonatomic) double currentZoomLevel; // @synthesize currentZoomLevel=_currentZoomLevel;
@property(nonatomic) _Bool loadInCurrentArea; // @synthesize loadInCurrentArea=_loadInCurrentArea;
@property(nonatomic) _Bool loadByAreaSearchBtn; // @synthesize loadByAreaSearchBtn=_loadByAreaSearchBtn;
@property(nonatomic) _Bool continueSearchInCurrentArea; // @synthesize continueSearchInCurrentArea=_continueSearchInCurrentArea;
@property(nonatomic) _Bool isNewQuery; // @synthesize isNewQuery=_isNewQuery;
@property(copy, nonatomic) NSArray *shopAnnotations; // @synthesize shopAnnotations=_shopAnnotations;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *filterMenuData; // @synthesize filterMenuData=_filterMenuData;
@property(retain, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
@property(retain, nonatomic) NSDictionary *selectedMenus; // @synthesize selectedMenus=_selectedMenus;
@property(copy, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(copy, nonatomic) NSString *monitorSrc; // @synthesize monitorSrc=_monitorSrc;
@property(copy, nonatomic) NSString *searchSrc; // @synthesize searchSrc=_searchSrc;
@property(copy, nonatomic) NSString *businessAreaId; // @synthesize businessAreaId=_businessAreaId;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property(copy, nonatomic) NSDictionary *paramsMap; // @synthesize paramsMap=_paramsMap;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) UIButton *myLocationBtn; // @synthesize myLocationBtn=_myLocationBtn;
@property(retain, nonatomic) O2OMapSearchCurrentAreaSearchView *areaSearchView; // @synthesize areaSearchView=_areaSearchView;
@property(retain, nonatomic) O2OFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) O2OMapSearchShopsViewController *shopsViewController; // @synthesize shopsViewController=_shopsViewController;
@property(retain, nonatomic) O2OMapSearchShopsContainerView *shopsContainerView; // @synthesize shopsContainerView=_shopsContainerView;
@property(retain, nonatomic) O2OMapSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) O2OSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MAMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)pageParams;
- (id)pageSpm;
- (void)mapView:(id)arg1 mapDidZoomByUser:(_Bool)arg2;
- (void)mapView:(id)arg1 mapWillZoomByUser:(_Bool)arg2;
- (void)mapView:(id)arg1 mapDidMoveByUser:(_Bool)arg2;
- (void)mapView:(id)arg1 mapWillMoveByUser:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (_Bool)modelShouldRaise1002Exception:(id)arg1;
- (void)modelDidLoadFilter:(id)arg1;
- (void)modelWillLoadMore:(id)arg1;
- (id)spmContainer:(id)arg1;
- (void)searchBarDidBack:(id)arg1;
- (void)searchBarDidClickVoiceSearch:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)onClickTextField:(_Bool)arg1;
- (void)deselectAnnotation:(id)arg1;
- (void)selectAnnotation:(id)arg1 shop:(id)arg2;
- (void)moveCoordinateToCenter:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)onClickAnnotation:(id)arg1;
- (void)onClickMyLocation:(id)arg1;
- (void)showAreaSearchFinishHint;
- (void)beginAreaSearchLoading;
- (void)showAreaSearchBtn;
- (void)hideAreaSearchBtn;
- (void)resetAreaSearchBtnPosition;
- (id)selectedMenus:(_Bool)arg1;
- (id)currentSelectedMenus;
- (void)cancelRequest;
- (void)loadData:(_Bool)arg1 triggerByAreaSearchBtn:(_Bool)arg2;
- (void)didFilterSelected:(id)arg1 srcSPM:(id)arg2 subMenu:(id)arg3;
- (void)willPopover;
- (void)resetFilter:(id)arg1;
- (id)annotationsForShops:(id)arg1;
- (void)autoAdjustScreenArea:(id)arg1;
- (void)refreshShopAnnotation:(_Bool)arg1;
- (void)refreshMapShops:(_Bool)arg1 backToTop:(_Bool)arg2;
- (void)refreshListViewBySelectedOrder:(_Bool)arg1;
- (void)refreshListView;
- (double)safeAreaBottom;
- (void)endShowLoding;
- (void)showLoading:(id)arg1;
- (void)adjustUI;
- (void)handleEmpty:(id)arg1;
- (void)showEmpty:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)loadSetState:(_Bool)arg1 triggeredByAreaBtn:(_Bool)arg2;
- (_Bool)autohideNavigationBar;
- (void)setupSearchBar;
- (void)setupMap;
- (void)didSearchFromSearchHome:(id)arg1;
- (void)reloadDocument;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

