//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPLinkMetadata;

__attribute__((visibility("hidden")))
@interface LPLinkMetadataDownloadProgressTransformer : NSObject
{
    unsigned long long _bytesLoaded;	// 8 = 0x8
    LPLinkMetadata *_metadata;	// 16 = 0x10
    long long _downloadState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a60ea
@property(nonatomic) long long downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned long long bytesLoaded; // @synthesize bytesLoaded=_bytesLoaded;
- (id)downloadProgressForTransformer:(id)arg1;	// IMP=0x00000000000a5fd3
- (id)initWithBytesLoaded:(unsigned long long)arg1 downloadState:(long long)arg2 metadata:(id)arg3;	// IMP=0x00000000000a5f3f

@end

