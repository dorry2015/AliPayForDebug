//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDynamicDeploymentModel.h"

@class NSString;

@interface APDynamicDeploymentPolicy : APDynamicDeploymentModel
{
    int _type;
    NSString *_name;
    long long _delta;
}

+ (_Bool)isValidForModel:(id)arg1;
@property(nonatomic) long long delta; // @synthesize delta=_delta;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
