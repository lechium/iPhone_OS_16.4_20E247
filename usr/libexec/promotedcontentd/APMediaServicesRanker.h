//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APMediaServicesRanker : NSObject
{
}

+ (void)rankRepresentations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000000f9e0a
+ (id)_processRerankedRepresentations:(id)arg1 originalContentData:(id)arg2 withError:(id)arg3;	// IMP=0x00100000000f974d
+ (void)_rerankOnDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f939a
+ (void)_sortByRank:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f9334
+ (id)findValidObjectsInContentDataItems:(id)arg1;	// IMP=0x00100000000f9291
+ (id)sortByRank:(id)arg1;	// IMP=0x00100000000f9165

@end

