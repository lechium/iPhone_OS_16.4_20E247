//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelLibraryRequest;

__attribute__((visibility("hidden")))
@interface MPModelLibraryRequestOperation : MPAsyncOperation
{
    MPModelLibraryRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000038a07
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
- (void)_executeNewRequest;	// IMP=0x0000000000037316
- (id)_sectionProperties;	// IMP=0x00000000000371f2
- (void)_sanityCheckRequest;	// IMP=0x00000000000368b7
- (id)_libraryView;	// IMP=0x00000000000367b5
- (id)_itemProperties;	// IMP=0x0000000000036798
- (void)_insertPropertyCacheForEntityPID:(long long)arg1 entityClass:(void *)arg2 entityTranslator:(id)arg3 translationContext:(id)arg4 propertyCachesVector:(const void *)arg5;	// IMP=0x00000000000362b1
- (void)_executeLegacyRequest;	// IMP=0x00000000000332fe
- (void)execute;	// IMP=0x00000000000330e7

@end

