//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSXPCStoreManagedObjectArchivingToken : NSObject
{
    NSURL *_managedObjectReferenceURI;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001be42
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c183
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001bf0a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001bee7
- (void)dealloc;	// IMP=0x000000000001bea4
- (id)URI;	// IMP=0x000000000001be9a
- (id)initWithURI:(id)arg1;	// IMP=0x000000000001be4a

@end

