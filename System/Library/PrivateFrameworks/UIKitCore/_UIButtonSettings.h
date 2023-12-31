//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIButtonSettings : PTSettings
{
    _Bool _highlightMode;	// 8 = 0x8
    _Bool _highlightSubclasses;	// 9 = 0x9
    _Bool _highlightIgnoresBars;	// 10 = 0xa
    _Bool _highlightBelow;	// 11 = 0xb
    _Bool _highlightAlternateColor;	// 12 = 0xc
}

+ (id)settingsControllerModule;	// IMP=0x001000000123b88a
@property(nonatomic) _Bool highlightAlternateColor; // @synthesize highlightAlternateColor=_highlightAlternateColor;
@property(nonatomic) _Bool highlightBelow; // @synthesize highlightBelow=_highlightBelow;
@property(nonatomic) _Bool highlightIgnoresBars; // @synthesize highlightIgnoresBars=_highlightIgnoresBars;
@property(nonatomic) _Bool highlightSubclasses; // @synthesize highlightSubclasses=_highlightSubclasses;
@property(nonatomic) _Bool highlightMode; // @synthesize highlightMode=_highlightMode;
- (void)setDefaultValues;	// IMP=0x000000000123b7fd
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x000000000123b577
- (id)initWithDefaultValues;	// IMP=0x000000000123b528

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

