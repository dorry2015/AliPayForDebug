//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APCommonSelectTableViewCell, APCommonSelectView, AUSearchBar, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UITableView, UITableViewCell, UIView;
@protocol APCommonItemProtocol;

@protocol APCommonSelectDelegate <NSObject>

@optional
- (void)swipeTableCellSlideMenusDidOpenInCell:(APCommonSelectTableViewCell *)arg1;
- (void)swipeTableCellWillBeginSwipingInCell:(APCommonSelectTableViewCell *)arg1;
- (void)commonView:(APCommonSelectView *)arg1 didClickSlideMenuBtnForItem:(id <APCommonItemProtocol>)arg2 atIndex:(long long)arg3 cell:(APCommonSelectTableViewCell *)arg4;
- (NSArray *)manageSlideMenusInCommonView:(APCommonSelectView *)arg1 item:(id <APCommonItemProtocol>)arg2 cell:(APCommonSelectTableViewCell *)arg3;
- (void)triggerToLoadNextPageInCommonView:(APCommonSelectView *)arg1;
- (void)commonViewDidEndDragging:(APCommonSelectView *)arg1 willDecelerate:(_Bool)arg2;
- (void)commonViewDidEndDecelerating:(APCommonSelectView *)arg1;
- (void)commonViewWillBeginDragging:(APCommonSelectView *)arg1;
- (void)commonViewDidDismissSearchResult:(APCommonSelectView *)arg1;
- (void)commonView:(APCommonSelectView *)arg1 searchResultDeletedItem:(id <APCommonItemProtocol>)arg2;
- (_Bool)commonView:(APCommonSelectView *)arg1 canDeleteSearchResultItem:(id <APCommonItemProtocol>)arg2;
- (void)commonView:(APCommonSelectView *)arg1 searchBarWillEndSearch:(AUSearchBar *)arg2;
- (void)commonView:(APCommonSelectView *)arg1 searchBarWillBeginSearch:(AUSearchBar *)arg2;
- (void)startCustomSearchWithText:(NSString *)arg1;
- (NSString *)handleSearchText:(NSString *)arg1;
- (NSArray *)commonView:(APCommonSelectView *)arg1 globelSearchName:(NSString *)arg2 globeSearchMatchResult:(NSArray *)arg3;
- (UIView *)customIntroViewInCommonView:(APCommonSelectView *)arg1;
- (void)selectionDidChangeInCommonView:(APCommonSelectView *)arg1;
- (NSMutableArray *)defaultSelectedItemsInCommonView:(APCommonSelectView *)arg1;
- (void)commonView:(APCommonSelectView *)arg1 configCell:(APCommonSelectTableViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3 item:(id <APCommonItemProtocol>)arg4;
- (void)commonView:(APCommonSelectView *)arg1 scorllViewDidScroll:(UITableView *)arg2;
- (void)commonView:(APCommonSelectView *)arg1 didClickSearchBtWithText:(NSString *)arg2;
- (UIView *)commonView:(APCommonSelectView *)arg1 viewForFooterInCustomSection:(long long)arg2;
- (UIView *)commonView:(APCommonSelectView *)arg1 viewForHeaderInCustomSection:(long long)arg2;
- (double)commonView:(APCommonSelectView *)arg1 heightForFooterInCustomSection:(long long)arg2;
- (double)commonView:(APCommonSelectView *)arg1 heightForHeaderInCustomSection:(long long)arg2;
- (void)commonView:(APCommonSelectView *)arg1 didSelectCustomRowAtIndexPath:(NSIndexPath *)arg2;
- (UITableViewCell *)commonView:(APCommonSelectView *)arg1 cellForCustomRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)commonView:(APCommonSelectView *)arg1 heightForRowInCustomIndexPath:(NSIndexPath *)arg2;
- (long long)commonView:(APCommonSelectView *)arg1 numberOfRowInCustomSection:(long long)arg2;
- (long long)numberOfCustomSectionInCommonView:(APCommonSelectView *)arg1;
- (UIView *)commonView:(APCommonSelectView *)arg1 viewForFooterInSection:(long long)arg2 headerTitle:(NSString *)arg3;
- (double)commonView:(APCommonSelectView *)arg1 heightForFooterInSection:(long long)arg2 headerTitle:(NSString *)arg3;
- (UIView *)commonView:(APCommonSelectView *)arg1 viewForHeaderInSection:(long long)arg2 headerTitle:(NSString *)arg3 imageIcon:(NSString *)arg4 useDefault:(_Bool *)arg5;
- (double)commonView:(APCommonSelectView *)arg1 heightForHeaderInSection:(long long)arg2 headerTitle:(NSString *)arg3 useDefault:(_Bool *)arg4;
- (void)commonView:(APCommonSelectView *)arg1 refreshLogCostEndWithItem:(id <APCommonItemProtocol>)arg2;
- (void)commonView:(APCommonSelectView *)arg1 configLogCostEndWithItem:(id <APCommonItemProtocol>)arg2;
- (void)commonView:(APCommonSelectView *)arg1 configLogCostStartWithItem:(id <APCommonItemProtocol>)arg2;
- (int)displayModeForCommonView:(APCommonSelectView *)arg1 item:(id <APCommonItemProtocol>)arg2 indexPath:(NSIndexPath *)arg3;
- (void)commonView:(APCommonSelectView *)arg1 configCell:(APCommonSelectTableViewCell *)arg2 item:(id <APCommonItemProtocol>)arg3;
- (double)cellHeightInCommonView:(APCommonSelectView *)arg1 item:(id <APCommonItemProtocol>)arg2 indexPath:(NSIndexPath *)arg3;
- (NSString *)cellClassNameInCommonView:(APCommonSelectView *)arg1 item:(id <APCommonItemProtocol>)arg2;
- (NSMutableDictionary *)cellConfigInCommonView:(APCommonSelectView *)arg1 item:(id <APCommonItemProtocol>)arg2;
- (NSArray *)secondarySearchTitlesInCommonView:(APCommonSelectView *)arg1;
- (NSArray *)secondaryDataIndexLeftIconNamesInCommonView:(APCommonSelectView *)arg1;
- (NSArray *)secondaryDataIndexIconNamesInCommonView:(APCommonSelectView *)arg1;
- (NSArray *)secondaryDataTitlesInCommonView:(APCommonSelectView *)arg1;
- (NSArray *)secondaryDataInCommonView:(APCommonSelectView *)arg1;
- (NSArray *)mainDataDisplayTitlesInCommonView:(APCommonSelectView *)arg1;
- (NSString *)mainDataSearchTitleInCommonView:(APCommonSelectView *)arg1;
- (NSArray *)mainDataIndexCharInCommonView:(APCommonSelectView *)arg1;
- (NSDictionary *)mainDataInCommonView:(APCommonSelectView *)arg1;
- (void)didClickBackBtnWithCommonView:(APCommonSelectView *)arg1;
- (void)didClickButtonForItem:(id <APCommonItemProtocol>)arg1 commonView:(APCommonSelectView *)arg2;
- (void)didClickIconForItem:(id <APCommonItemProtocol>)arg1 commonView:(APCommonSelectView *)arg2;
- (void)deSelectItems:(NSArray *)arg1 commonView:(APCommonSelectView *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)didSelectItems:(NSArray *)arg1 commonView:(APCommonSelectView *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)didSelectItems:(NSArray *)arg1 commonView:(APCommonSelectView *)arg2;
@end

