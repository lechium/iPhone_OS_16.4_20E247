//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MapsSuggestionsFeelerDelegate;

@interface MapsSuggestionsBaseFeeler : NSObject
{
    id <MapsSuggestionsFeelerDelegate> _delegate;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (_Bool)isEnabled;	// IMP=0x00200000000217a0
- (void).cxx_destruct;	// IMP=0x00200000000218d9
@property(readonly, copy) NSString *description;
- (_Bool)canProduceSignalType:(long long)arg1;	// IMP=0x0010000000021814
- (long long)disposition;	// IMP=0x00100000000217fe
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;	// IMP=0x001000000002177e
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000021708
- (id)initWithDelegate:(id)arg1 name:(id)arg2;	// IMP=0x001000000002163c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

