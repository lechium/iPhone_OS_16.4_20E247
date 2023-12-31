//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICDResponseDataParser : NSObject
{
}

+ (id)_parseListingItemWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x00400000000f7f2b
+ (id)_parseErrorResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f7cc8
+ (id)_parsePlayStatusResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f7131
+ (id)_parseItemIDArrayWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f6f89
+ (id)_parseBrowseListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f6de0
+ (id)_parseListingCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f6be5
+ (id)_parseItemsResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f68b2
+ (id)_parseUpdateTypeWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f67ce
+ (id)_parseEditCommandResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f65cc
+ (id)_parseDictionaryCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f634d
+ (id)_parseDeletedIDListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f610c
+ (id)_parseControlPromptResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f5ed0
+ (id)_parseControlInterfacesResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f5d2b
+ (id)_parseCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f5b6b
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f59ab
+ (id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f5826
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f56a1
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f53c6
+ (id)_parseUpdateResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f51f3
+ (id)_parseLoginResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f5022
+ (id)_parseResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 length:(unsigned long long)arg3 usingHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f4d3c
+ (unsigned long long)_parseItemPropertyCountWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000f4d17
+ (void)enumerateDeletedItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f4ba7
+ (void)enumerateItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f4b05
+ (void)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f4a2d
+ (unsigned long long)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 valuesOut:(CDStruct_4a344573 *)arg3 valuesCapacity:(unsigned long long)arg4;	// IMP=0x00100000000f470f
+ (id)enumerateRawItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f45a2
+ (id)parseResponseData:(id)arg1;	// IMP=0x00100000000f458e
+ (id)parseErrorInResponseData:(id)arg1;	// IMP=0x00100000000f443b

@end

