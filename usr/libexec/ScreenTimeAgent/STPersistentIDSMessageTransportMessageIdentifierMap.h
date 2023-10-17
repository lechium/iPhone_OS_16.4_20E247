//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;
@protocol STKeyValueStore;

@interface STPersistentIDSMessageTransportMessageIdentifierMap : NSObject
{
    NSMutableDictionary *_messageIdentifiersByPrimitiveIdentifier;	// 8 = 0x8
    NSMutableDictionary *_primitiveIdentifiersByMessageIdentifier;	// 16 = 0x10
    id <STKeyValueStore> _keyValueStore;	// 24 = 0x18
}

+ (id)_loadMessageIdentifiersByPrimitiveIdentifierFromKeyValueStore:(id)arg1;	// IMP=0x002000000005b815
- (void).cxx_destruct;	// IMP=0x002000000005c0a4
@property(readonly) id <STKeyValueStore> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
// Error: Property attributes should begin with the type ('T') attribute, property name: primitiveIdentifiersByMessageIdentifier
// Property attributes: (null)

@property(readonly) NSMutableDictionary *messageIdentifiersByPrimitiveIdentifier; // @synthesize messageIdentifiersByPrimitiveIdentifier=_messageIdentifiersByPrimitiveIdentifier;
- (id)messageIdentifierForPrimitiveMessageIdentifier:(id)arg1;	// IMP=0x001000000005bfce
- (void)removeMessageIdentifier:(id)arg1;	// IMP=0x001000000005beca
- (void)removePrimitiveMessageIdentifier:(id)arg1;	// IMP=0x001000000005bdc6
- (void)insertMessageIdentifier:(id)arg1 forPrimitiveMessageIdentifier:(id)arg2;	// IMP=0x001000000005bcb4
- (void)save;	// IMP=0x001000000005b615
@property(readonly) NSNumber *numberOfEntries;
- (id)initWithKeyValueStore:(id)arg1;	// IMP=0x001000000005b43f

@end
