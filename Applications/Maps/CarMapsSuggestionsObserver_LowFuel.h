//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMapsSuggestionsController, NSMutableDictionary, NSString;

@interface CarMapsSuggestionsObserver_LowFuel : NSObject
{
    _Bool _active;	// 8 = 0x8
    CDUnknownBlockType _dismissalBlock;	// 16 = 0x10
    NSMutableDictionary *_shownFuelAlerts;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000082ede5
@property(retain, nonatomic) NSMutableDictionary *shownFuelAlerts; // @synthesize shownFuelAlerts=_shownFuelAlerts;
@property(copy) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)carMapsSuggestionControllerDidRefresh:(id)arg1;	// IMP=0x001000000082e9ff
- (id)lowFuelSuggestions;	// IMP=0x001000000082e84d
@property(readonly) _Bool hasLowFuelSuggestion;
@property(readonly) CarMapsSuggestionsController *controller;
- (id)unshownFuelAlerts:(id)arg1;	// IMP=0x001000000082e34c
- (_Bool)updateShownFuelAlerts:(id)arg1;	// IMP=0x001000000082df2e
- (void)addShownFuelAlert:(id)arg1;	// IMP=0x001000000082de58
- (void)removeAllShownFuelAlerts;	// IMP=0x001000000082ddc7
- (id);	// IMP=0x001000000082dd71

// Remaining properties
@property _Bool allowLowFuelSuggestion;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

