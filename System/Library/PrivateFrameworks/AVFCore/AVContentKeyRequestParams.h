//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVContentKeyRequestParams : NSObject
{
    NSData *_initializationData;	// 8 = 0x8
    NSData *_contentIdentifier;	// 16 = 0x10
    NSData *_keyIDFromInitializationData;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    id _identifier;	// 40 = 0x28
}

@property(copy) id identifier; // @synthesize identifier=_identifier;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSData *keyIDFromInitializationData; // @synthesize keyIDFromInitializationData=_keyIDFromInitializationData;
@property(copy) NSData *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(copy) NSData *initializationData; // @synthesize initializationData=_initializationData;
- (void)dealloc;	// IMP=0x000000000014bb36
- (id)initWithInitializationData:(id)arg1 contentIdentifier:(id)arg2 keyIDFromInitializationData:(id)arg3 options:(id)arg4 identifier:(id)arg5;	// IMP=0x000000000014ba84

@end

