//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOContainerElement.h"

@class APDAOMethod;

@interface APDAOMethodStep : APDAOContainerElement
{
    _Bool _resumable;
    APDAOMethod *_parentMethod;
}

@property(nonatomic) _Bool resumable; // @synthesize resumable=_resumable;
@property(nonatomic) __weak APDAOMethod *parentMethod; // @synthesize parentMethod=_parentMethod;
- (void).cxx_destruct;
- (id)initWithXML:(id)arg1 parentMethod:(id)arg2;

@end
