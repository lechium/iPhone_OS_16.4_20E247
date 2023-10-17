//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityKind : NSObject
{
    NSString *_mediaEntityClassName;	// 8 = 0x8
    NSDictionary *_propertyDescriptorsByName;	// 16 = 0x10
    NSArray *_propertyDescriptors;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000079f3f
@property(copy, nonatomic) NSArray *propertyDescriptors; // @synthesize propertyDescriptors=_propertyDescriptors;
@property(copy, nonatomic) NSDictionary *propertyDescriptorsByName; // @synthesize propertyDescriptorsByName=_propertyDescriptorsByName;
@property(readonly, copy, nonatomic) NSString *mediaEntityClassName; // @synthesize mediaEntityClassName=_mediaEntityClassName;
- (id)description;	// IMP=0x0000000000079d6b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079d0d
- (id)sortingPropertyDescriptorForName:(id)arg1;	// IMP=0x0000000000079c47
- (id)propertyDescriptorForName:(id)arg1;	// IMP=0x0000000000079bc4
- (id)initWithMediaEntityClassName:(id)arg1;	// IMP=0x0000000000079922
- (id)init;	// IMP=0x00000000000798b3

@end
