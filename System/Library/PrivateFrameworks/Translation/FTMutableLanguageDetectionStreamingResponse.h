//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTLanguageDetectionResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableLanguageDetectionStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x0060000000192194
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x006000000019213a
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x006000000019210c
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTLanguageDetectionResponse *contentAsFTLanguageDetectionResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000191dde
- (id)init;	// IMP=0x0000000000191d50

@end

