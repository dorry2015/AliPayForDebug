//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SECU_LEGO_TEMPLATELegoTemplateModel : NSObject
{
    NSString *_templateName;
    NSString *_legoTemplateID;
    NSString *_legoTemplateVersion;
    NSString *_type;
    NSString *_clientTemplateId;
    NSString *_templateUTName;
    NSArray *_cells;
    long long _lastModified;
    NSString *_scm;
}

+ (Class)cellsElementClass;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(nonatomic) long long lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) NSString *templateUTName; // @synthesize templateUTName=_templateUTName;
@property(retain, nonatomic) NSString *clientTemplateId; // @synthesize clientTemplateId=_clientTemplateId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *legoTemplateVersion; // @synthesize legoTemplateVersion=_legoTemplateVersion;
@property(retain, nonatomic) NSString *legoTemplateID; // @synthesize legoTemplateID=_legoTemplateID;
@property(retain, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void).cxx_destruct;

@end

