//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : NSData
{
    NSData *_originalData;	// 8 = 0x8
    void *_bytesPtrForStore;	// 16 = 0x10
    unsigned long long _bytesLengthForStore;	// 24 = 0x18
    void *_bytesPtrForExternalReference;	// 32 = 0x20
    unsigned long long _bytesLengthForExternalReference;	// 40 = 0x28
    NSString *_externalReferenceLocation;	// 48 = 0x30
    NSString *_safeguardLocation;	// 56 = 0x38
    id _ubiquitousLocation;	// 64 = 0x40
    struct __externalDataFlags {
        unsigned int _isStoredExternally:1;
        unsigned int _hasMappedData:1;
        unsigned int _cleanupOnDealloc:1;
        unsigned int _dataProtectionLevel:3;
        unsigned int _isStoredUbiquitously:1;
        unsigned int _createdByUbiquityImport:1;
        unsigned int _reserved:24;
    } _externalDataFlags;	// 72 = 0x48
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x00100000002463c2
- (_Bool)_createdByUbiquityImport;	// IMP=0x00000000002473f2
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x0000000000247324
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002472dc
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x000000000024706a
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000246f03
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000246eec
- (void)doCleanupOnDealloc;	// IMP=0x0000000000246edb
- (id)UUID;	// IMP=0x0000000000246ebe
- (id)databaseValue;	// IMP=0x0000000000246e8c
- (id)externalReferenceLocationString;	// IMP=0x0000000000246e6e
- (int)preferredProtectionLevel;	// IMP=0x0000000000246e58
- (id)_safeguardLocationString;	// IMP=0x0000000000246e3a
- (const char *)_safeguardLocation;	// IMP=0x0000000000246e1d
- (const char *)_externalReferenceLocation;	// IMP=0x0000000000246e00
- (unsigned long long)_bytesLengthForExternalReference;	// IMP=0x0000000000246def
- (const void *)_bytesPtrForExternalReference;	// IMP=0x0000000000246de5
- (unsigned long long)_bytesLengthForStore;	// IMP=0x0000000000246dd4
- (const void *)_bytesPtrForStore;	// IMP=0x0000000000246dc3
- (unsigned long long)length;	// IMP=0x0000000000246db1
- (const void *)bytes;	// IMP=0x0000000000246da7
- (id)description;	// IMP=0x0000000000246d32
- (_Bool)hasExternalReferenceContent;	// IMP=0x0000000000246d20
- (void)_deleteExternalReferenceFromPermanentLocation;	// IMP=0x0000000000246cfd
- (void)_moveExternalReferenceToPermanentLocation;	// IMP=0x0000000000246c77
- (void)_writeExternalReferenceToInterimLocation;	// IMP=0x0000000000246c4f
- (void)_setBytesForExternalReference:(const void *)arg1;	// IMP=0x0000000000246582
- (id)_originalData;	// IMP=0x0000000000246571
- (id)mutableCopy;	// IMP=0x000000000024651d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024650b
- (id)copy;	// IMP=0x0000000000246500
- (void)dealloc;	// IMP=0x00000000002463d3
- (Class)classForCoder;	// IMP=0x00000000002463b1
- (id)initWithStoreBytes:(const void *)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6;	// IMP=0x00000000002461f7
- (id)initWithStoreBytes:(const void *)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5;	// IMP=0x000000000024604d
- (id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4;	// IMP=0x0000000000245df1
- (id)initForUbiquityDictionary:(id)arg1 store:(id)arg2;	// IMP=0x0000000000245a76

@end

