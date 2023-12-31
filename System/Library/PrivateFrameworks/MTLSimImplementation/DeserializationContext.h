//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDeserializer;

__attribute__((visibility("hidden")))
@interface DeserializationContext : NSObject
{
    id <MTLDeserializer> _deserializer;	// 8 = 0x8
}

- (id)functionWithFunctionRef:(unsigned long long)arg1;	// IMP=0x0000000000002a72
- (void)dealloc;	// IMP=0x0000000000002a2f
- (id)initWithDeserializer:(id)arg1;	// IMP=0x00000000000029e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

