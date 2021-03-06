//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBDocument, NSString, WKEasyViewBuilder, WKTableCellModel;

@interface VAHorizonViewItemCell : UICollectionViewCell
{
    NSString *_templateId;
    FBDocument *_document;
    WKEasyViewBuilder *_viewBuilder;
    WKTableCellModel *_cellModel;
}

@property(retain, nonatomic) WKTableCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) WKEasyViewBuilder *viewBuilder; // @synthesize viewBuilder=_viewBuilder;
@property(retain, nonatomic) FBDocument *document; // @synthesize document=_document;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (void).cxx_destruct;
- (_Bool)handleEvent:(id)arg1 doc:(id)arg2;
- (void)showDocument:(id)arg1;
- (void)buildCell:(id)arg1 viewBuilder:(id)arg2;

@end

