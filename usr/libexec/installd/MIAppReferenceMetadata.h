//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIAppReferenceMetadata : NSObject
{
    NSArray *_personas;	// 8 = 0x8
}

+ (id)referenceMetadataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000024ee6
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000024a35
- (void).cxx_destruct;	// IMP=0x0020000000025305
@property(retain, nonatomic) NSArray *personas; // @synthesize personas=_personas;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002524a
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000024c9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000024bd1
- (unsigned long long)hash;	// IMP=0x0010000000024b8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000024b14
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000024a3d
- (id)init;	// IMP=0x0010000000024a06

@end

