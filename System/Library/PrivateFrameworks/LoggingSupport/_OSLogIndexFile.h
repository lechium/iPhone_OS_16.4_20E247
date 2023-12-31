//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _OSLogChunkFileReference, _OSLogChunkStore;

__attribute__((visibility("hidden")))
@interface _OSLogIndexFile : NSObject
{
    _OSLogChunkFileReference *_cfr;	// 8 = 0x8
    _OSLogChunkStore *_cs;	// 16 = 0x10
    unsigned char _bootu[16];	// 24 = 0x18
    _Bool _timespanDetermined;	// 40 = 0x28
    unsigned long long _cot_header;	// 48 = 0x30
    unsigned long long _cot;	// 56 = 0x38
    unsigned long long _cet;	// 64 = 0x40
    unsigned long long _et;	// 72 = 0x48
    unsigned long long _ot;	// 80 = 0x50
    char *_path;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000172f7
@property(readonly, nonatomic) char *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long oldestTime; // @synthesize oldestTime=_ot;
@property(readonly, nonatomic) unsigned long long endTime; // @synthesize endTime=_et;
@property(readonly, nonatomic) const char *bootUUID;
- (id)copyMappedChunkStore:(id *)arg1;	// IMP=0x00000000000172ab
- (_Bool)_determineTimespan;	// IMP=0x00000000000170ec
- (_Bool)_loadCatalogMetadataForTimespan;	// IMP=0x0000000000016ecb
- (_Bool)_loadHeaderMetadata:(id)arg1;	// IMP=0x0000000000016e05
- (void)dealloc;	// IMP=0x0000000000016dcb
- (id)initWithChunkStore:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000016d0d
- (id)initWithTraceFile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000016bd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

