//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (AuthKit)
+ (id)ak_jsonDictionaryWithResponseData:(id)arg1;	// IMP=0x008000000001b2b9
+ (id)ak_dictionaryWithResponseData:(id)arg1;	// IMP=0x008000000001b184
- (id)ak_toJSONString;	// IMP=0x001000000001bd95
- (id)ak_urlQueryString;	// IMP=0x001000000001bbeb
- (id)ak_mapObjectsNullable:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ba73
- (id)ak_mapObjects:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b8f2
- (id)ak_redactedCopy;	// IMP=0x001000000001b72b
- (id)_ak_truncateTokenDict:(id)arg1;	// IMP=0x001000000001b53b
- (id)_ak_truncateTokenString:(id)arg1;	// IMP=0x001000000001b462
- (id)_ak_shortenServiceIdentifier:(id)arg1;	// IMP=0x001000000001b3eb
@end
