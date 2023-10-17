//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelLibraryFavoriteEntityChangeRequest, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPModelLibraryFavoriteEntityChangeRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    _Bool _canRerunRequest;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
    MPModelLibraryFavoriteEntityChangeRequest *_request;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005292d
@property(copy, nonatomic) MPModelLibraryFavoriteEntityChangeRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (id)importFromRequestIdentifiers:(id)arg1;	// IMP=0x000000000005275d
- (void)_runLibraryMappingRequestWithIdentifiers:(id)arg1 class:(Class)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005259f
- (void)_setFavoriteState:(long long)arg1 forEntityWithPersistentID:(long long)arg2 modelClass:(Class)arg3;	// IMP=0x0000000000050bb7
- (void)_runRequestWithIdentifiers:(id)arg1 persistentID:(long long)arg2 favoriteState:(long long)arg3 class:(Class)arg4;	// IMP=0x0000000000050a03
- (void)execute;	// IMP=0x0000000000050246

@end
