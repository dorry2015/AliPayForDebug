//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APWaspGuideModel : NSObject
{
    _Bool _shouldShowGuidDialog;
    int _showedCount;
    int _projectId;
    NSString *_headerImageURL;
    NSString *_dialogTitle;
    NSString *_dialogContents;
    NSString *_dialogEnsureText;
    NSString *_dialogCancelText;
    NSString *_floatTips;
}

@property(nonatomic) _Bool shouldShowGuidDialog; // @synthesize shouldShowGuidDialog=_shouldShowGuidDialog;
@property(nonatomic) int projectId; // @synthesize projectId=_projectId;
@property(nonatomic) int showedCount; // @synthesize showedCount=_showedCount;
@property(retain, nonatomic) NSString *floatTips; // @synthesize floatTips=_floatTips;
@property(retain, nonatomic) NSString *dialogCancelText; // @synthesize dialogCancelText=_dialogCancelText;
@property(retain, nonatomic) NSString *dialogEnsureText; // @synthesize dialogEnsureText=_dialogEnsureText;
@property(retain, nonatomic) NSString *dialogContents; // @synthesize dialogContents=_dialogContents;
@property(retain, nonatomic) NSString *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property(retain, nonatomic) NSString *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
- (void).cxx_destruct;

@end
