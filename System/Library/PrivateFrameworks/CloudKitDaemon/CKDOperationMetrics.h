//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface CKDOperationMetrics : NSObject
{
    _Bool _walrusEnabled;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    double _queueing;	// 32 = 0x20
    double _executing;	// 40 = 0x28
    unsigned long long _bytesUploaded;	// 48 = 0x30
    unsigned long long _bytesDownloaded;	// 56 = 0x38
    unsigned long long _connections;	// 64 = 0x40
    unsigned long long _connectionsCreated;	// 72 = 0x48
    unsigned long long _bytesFulfilledLocally;	// 80 = 0x50
    unsigned long long _bytesResumed;	// 88 = 0x58
    unsigned long long _recordsUploaded;	// 96 = 0x60
    unsigned long long _recordsDownloaded;	// 104 = 0x68
    unsigned long long _recordsDeleted;	// 112 = 0x70
    unsigned long long _assetsUploaded;	// 120 = 0x78
    unsigned long long _assetsUploadedFileSize;	// 128 = 0x80
    unsigned long long _assetsDownloaded;	// 136 = 0x88
    unsigned long long _assetsDownloadedFileSize;	// 144 = 0x90
    unsigned long long _requestCount;	// 152 = 0x98
    unsigned long long _retries;	// 160 = 0xa0
    NSMutableSet *_requestUUIDs;	// 168 = 0xa8
    unsigned long long _zoneishKeysRolled;	// 176 = 0xb0
    unsigned long long _perRecordKeysRolled;	// 184 = 0xb8
    unsigned long long _zoneKeysRolled;	// 192 = 0xc0
    unsigned long long _shareKeysRolled;	// 200 = 0xc8
    NSMutableDictionary *_requestOperationCountsByType;	// 208 = 0xd0
    NSMutableDictionary *_totalBytesByChunkProfile;	// 216 = 0xd8
    NSMutableDictionary *_chunkCountByChunkProfile;	// 224 = 0xe0
    NSMutableDictionary *_fileCountByChunkProfile;	// 232 = 0xe8
    NSMutableArray *_ranges;	// 240 = 0xf0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000032bf9c
- (void).cxx_destruct;	// IMP=0x000000000032cc4a
@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(retain, nonatomic) NSMutableDictionary *fileCountByChunkProfile; // @synthesize fileCountByChunkProfile=_fileCountByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *chunkCountByChunkProfile; // @synthesize chunkCountByChunkProfile=_chunkCountByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *totalBytesByChunkProfile; // @synthesize totalBytesByChunkProfile=_totalBytesByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *requestOperationCountsByType; // @synthesize requestOperationCountsByType=_requestOperationCountsByType;
@property unsigned long long shareKeysRolled; // @synthesize shareKeysRolled=_shareKeysRolled;
@property unsigned long long zoneKeysRolled; // @synthesize zoneKeysRolled=_zoneKeysRolled;
@property unsigned long long perRecordKeysRolled; // @synthesize perRecordKeysRolled=_perRecordKeysRolled;
@property unsigned long long zoneishKeysRolled; // @synthesize zoneishKeysRolled=_zoneishKeysRolled;
@property _Bool walrusEnabled; // @synthesize walrusEnabled=_walrusEnabled;
@property(readonly) NSMutableSet *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property unsigned long long retries; // @synthesize retries=_retries;
@property unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property unsigned long long assetsDownloadedFileSize; // @synthesize assetsDownloadedFileSize=_assetsDownloadedFileSize;
@property unsigned long long assetsDownloaded; // @synthesize assetsDownloaded=_assetsDownloaded;
@property unsigned long long assetsUploadedFileSize; // @synthesize assetsUploadedFileSize=_assetsUploadedFileSize;
@property unsigned long long assetsUploaded; // @synthesize assetsUploaded=_assetsUploaded;
@property unsigned long long recordsDeleted; // @synthesize recordsDeleted=_recordsDeleted;
@property unsigned long long recordsDownloaded; // @synthesize recordsDownloaded=_recordsDownloaded;
@property unsigned long long recordsUploaded; // @synthesize recordsUploaded=_recordsUploaded;
@property unsigned long long bytesResumed; // @synthesize bytesResumed=_bytesResumed;
@property unsigned long long bytesFulfilledLocally; // @synthesize bytesFulfilledLocally=_bytesFulfilledLocally;
@property unsigned long long connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property unsigned long long connections; // @synthesize connections=_connections;
@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property double executing; // @synthesize executing=_executing;
@property double queueing; // @synthesize queueing=_queueing;
@property double duration; // @synthesize duration=_duration;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032c3f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032bfa4
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;	// IMP=0x000000000032bc75
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;	// IMP=0x000000000032bc13
- (void)addRequestOperationCountsByOperationType:(id)arg1;	// IMP=0x000000000032b8f0
- (void)addRange:(id)arg1;	// IMP=0x000000000032b59a
@property(readonly) NSArray *rangesCopy;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;	// IMP=0x000000000032b3c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032af20
- (id)_initWithStartDate:(id)arg1;	// IMP=0x000000000032ae57
- (id)init;	// IMP=0x000000000032adfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
