//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelLibraryAddToPlaylistChangeRequest, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    MPModelLibraryAddToPlaylistChangeRequest *_request;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001832a2
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *request; // @synthesize request=_request;
- (_Bool)_isCloudLibraryEnabled;	// IMP=0x00000000001831e6
- (void)_updateCloudLibraryForPlaylist:(id)arg1;	// IMP=0x0000000000182ec0
- (void)execute;	// IMP=0x00000000001829fe

@end
