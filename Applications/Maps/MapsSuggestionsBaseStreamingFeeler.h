//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol MapsSuggestionsFeelerDelegate;

@interface MapsSuggestionsBaseStreamingFeeler
{
}

- (_Bool)updateSignals;	// IMP=0x0020000000a1f9ad
- (_Bool)stopUpdatingSignals;	// IMP=0x0010000000a1f997
- (_Bool)startUpdatingSignals;	// IMP=0x0010000000a1f981
- (long long)disposition;	// IMP=0x0010000000a1f976

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

