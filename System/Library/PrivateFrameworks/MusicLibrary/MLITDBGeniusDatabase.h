//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary;

__attribute__((visibility("hidden")))
@interface MLITDBGeniusDatabase : NSObject
{
}

+ (id)sharedGeniusDatabase;	// IMP=0x00600000000ea108
- (_Bool)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;	// IMP=0x00000000000e9be0
- (_Bool)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;	// IMP=0x00000000000e9bc0
- (_Bool)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;	// IMP=0x00000000000e9b9d
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;	// IMP=0x00000000000e9b29
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;	// IMP=0x00000000000e9ab5
- (unsigned int)geniusConfigurationVersion;	// IMP=0x00000000000e9a95
- (id)copyGeniusConfigrationDataAndBytes;	// IMP=0x00000000000e9a72
- (unsigned long long)defaultTrackCount;	// IMP=0x00000000000e9a47
- (unsigned long long)defaultMinTrackCount;	// IMP=0x00000000000e9a1c
- (_Bool)hasGeniusFeatureEnabled;	// IMP=0x00000000000e9a03
- (_Bool)hasGeniusDataAvailable;	// IMP=0x00000000000e99c3
- (_Bool)_hasAnySongs;	// IMP=0x00000000000e9902
- (_Bool)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;	// IMP=0x00000000000e97fd
- (_Bool)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4;	// IMP=0x00000000000e976e
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3;	// IMP=0x00000000000e972c
- (_Bool)_copyBlobData:(id *)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5;	// IMP=0x00000000000e93fe
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned int)arg4;	// IMP=0x00000000000e9200
- (unsigned int)_getInt32ValueInTable:(id)arg1 column:(id)arg2;	// IMP=0x00000000000e90c0
- (_Bool)_hasRowsInTable:(id)arg1;	// IMP=0x00000000000e8fa6
- (void)performGeniusDatabaseReadWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e8ee9
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary;
- (id)init;	// IMP=0x00000000000e8ea1

@end
