//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsSuggestionsMutableSignalPack, NSString;
@protocol MapsSuggestionsFeelerDelegate;

@interface MapsSuggestionsTimeFeeler
{
    MapsSuggestionsMutableSignalPack *_signalPack;	// 8 = 0x8
    double _pollingFrequency;	// 16 = 0x10
}

+ (_Bool)isEnabled;	// IMP=0x0020000000031463
- (void).cxx_destruct;	// IMP=0x00200000000318cd
- (double)updateSignals;	// IMP=0x0010000000031586
- (id)initWithDelegate:(id)arg1 name:(id)arg2;	// IMP=0x001000000003148b
- (_Bool)canProduceSignalType:(long long)arg1;	// IMP=0x001000000003147a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

