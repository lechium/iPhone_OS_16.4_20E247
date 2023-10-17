//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, SDActivityEncryptionKey;

@interface SDActivityEncryptionManager : NSObject
{
    NSMutableDictionary *_deviceIdentifierToDecryptionKey;	// 8 = 0x8
    SDActivityEncryptionKey *_encryptionKey;	// 16 = 0x10
    NSData *_wrappingKey;	// 24 = 0x18
    _Bool _shouldRefreshWrappingKey;	// 32 = 0x20
}

+ (id)sharedEncryptionManager;	// IMP=0x00400000001699a1
- (void).cxx_destruct;	// IMP=0x002000000016c2ed
- (id)baseDictDecryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x001000000016c196
- (id)baseDictEncryptionKey;	// IMP=0x001000000016c0b3
- (id)baseDictWrappingKey;	// IMP=0x001000000016bfd0
- (id)baseDict;	// IMP=0x001000000016bf60
- (_Bool)saveDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x001000000016bee0
- (id)loadDecryptionKeyDataRepresentationForDeviceIdentifier:(id)arg1;	// IMP=0x001000000016be81
- (_Bool)saveEncryptionKeyDataRepresentation:(id)arg1;	// IMP=0x001000000016be12
- (id)loadEncryptionKeyDataRepresentation;	// IMP=0x001000000016bdb3
- (_Bool)saveKeyDataRepresentation:(id)arg1 withBaseDict:(id)arg2;	// IMP=0x001000000016baef
- (id)loadKeyDataRepresentationWithBaseDict:(id)arg1;	// IMP=0x001000000016ba40
- (void)testWrappingKeychainItem;	// IMP=0x001000000016ba3a
- (id)loadWrappingKeyData;	// IMP=0x001000000016b8da
- (id)allKeys;	// IMP=0x001000000016b3ef
- (_Bool)deleteAllEncryptionAndDecryptionKeys;	// IMP=0x001000000016b29b
- (id)newDecryptionKeyFromDataRepresentation:(id)arg1;	// IMP=0x001000000016ae20
- (id);	// IMP=0x001000000016ad18
@property(readonly, nonatomic) NSData *dataRepresentationForCurrentEncryptionKey;
- (id)cachedDecryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x001000000016a916
- (id)decryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x001000000016a825
- (void)setDecryptionKey:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x001000000016a625
- (void)getTagAndCounterWhileEncryptingBytesInPlace:(unsigned char [10])arg1 forAdvertisementWithVersion:(unsigned char)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000016a39a
- (void)bumpEncryptionKeyCounterValue;	// IMP=0x001000000016a1d7
@property(readonly, nonatomic) SDActivityEncryptionKey *encryptionKey;
- (void)generateNewEncryptionKey;	// IMP=0x0010000000169e05
- (void)resetStateRequested:(id)arg1;	// IMP=0x0010000000169df3
- (void)removeObservers;	// IMP=0x0010000000169da0
- (void)addObservers;	// IMP=0x0010000000169d39
@property(readonly) NSString *state;
- (void)dealloc;	// IMP=0x0010000000169aac
- (id)init;	// IMP=0x0010000000169a42

@end
