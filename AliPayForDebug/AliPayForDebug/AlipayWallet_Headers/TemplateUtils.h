//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TemplateUtils : NSObject
{
}

+ (Class)cellCalssWithTemplateId:(id)arg1;
+ (struct CGSize)LabelSize:(id)arg1 spacing:(double)arg2 maxSize:(struct CGSize)arg3;
+ (double)getLabelWidth:(id)arg1 spacing:(double)arg2 maxSize:(struct CGSize)arg3;
+ (double)getLabelHeight:(id)arg1 spacing:(double)arg2 maxSize:(struct CGSize)arg3;
+ (void)lastCellAddFlag:(id)arg1;
+ (id)transferExtendCellData:(id)arg1;
+ (_Bool)isMoreTemplateId:(id)arg1 cellModel:(id)arg2;
+ (id)footerMoreCellData:(id)arg1;
+ (id)groupHeaderCellData:(id)arg1 sectionIndex:(long long)arg2;
+ (id)refreshSearchResultsWithWKEvent:(id)arg1 tableModel:(id)arg2;
+ (_Bool)canshowWithMoreTemplateId:(id)arg1;

@end
