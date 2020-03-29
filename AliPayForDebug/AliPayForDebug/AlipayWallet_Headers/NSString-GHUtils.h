//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (GHUtils)
+ (id)gh_characterSetsUnion:(id)arg1;
+ (_Bool)gh_isBlank:(id)arg1;
- (id)gh_removeAccents;
- (id)gh_characters;
- (id)gh_rot13;
- (id)gh_substringSegmentsWithinStart:(id)arg1 end:(id)arg2;
- (long long)gh_count:(id)arg1;
- (id)gh_reverse;
- (id)gh_fullPathExtension;
- (id)gh_attributize;
- (_Bool)gh_endsWith:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)gh_startsWith:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)gh_startsWith:(id)arg1;
- (_Bool)gh_startsWithAny:(id)arg1;
- (_Bool)gh_only:(id)arg1;
- (_Bool)gh_containsAny:(id)arg1;
- (_Bool)gh_containsCharacters:(id)arg1;
- (id)gh_componentsSeparatedByString:(id)arg1 include:(_Bool)arg2;
- (id)gh_splitReverseWithString:(id)arg1;
- (id)gh_lastSplitWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)gh_firstSplitWithString:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)gh_contains:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)gh_isEqualIgnoreCase:(id)arg1;
- (id)gh_present:(id)arg1;
- (id)gh_present;
- (_Bool)gh_isPresent;
- (id)gh_leftStrip;
- (id)gh_rightStrip;
- (id)gh_strip;
@end
