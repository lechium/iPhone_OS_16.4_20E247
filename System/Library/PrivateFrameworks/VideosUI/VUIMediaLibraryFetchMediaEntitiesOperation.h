//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryFetchMediaEntitiesOperation
{
    NSArray *_responses;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000028d9b
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) NSArray *responses; // @synthesize responses=_responses;
- (void)executionDidBegin;	// IMP=0x0000000000028b8a
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;	// IMP=0x0000000000028afe
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000000028a8f

@end

