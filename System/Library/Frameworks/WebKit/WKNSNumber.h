//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSNumber : NSNumber
{
    int _type;	// 8 = 0x8
    union {
        struct ObjectStorage<API::Number<bool, API::Object::Type::Boolean>> _boolean;
        struct ObjectStorage<API::Number<double, API::Object::Type::Double>> _double;
        struct ObjectStorage<API::Number<unsigned long long, API::Object::Type::UInt64>> _uint64;
        struct ObjectStorage<API::Number<long long, API::Object::Type::Int64>> _int64;
    } _number;	// 16 = 0x10
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cb5f7
- (long long)longLongValue;	// IMP=0x00000000001cb5ad
- (unsigned long long)unsignedLongLongValue;	// IMP=0x00000000001cb563
- (double)doubleValue;	// IMP=0x00000000001cb518
- (BOOL)charValue;	// IMP=0x00000000001cb4cc
- (void)getValue:(void *)arg1;	// IMP=0x00000000001cb460
- (const char *)objCType;	// IMP=0x00000000001cb434
- (void)dealloc;	// IMP=0x00000000001cb3bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
