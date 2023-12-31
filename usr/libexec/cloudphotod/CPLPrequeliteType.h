//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, PQLRawInjection;

@interface CPLPrequeliteType : NSObject
{
    PQLRawInjection *_injection;	// 8 = 0x8
    Class _objcClass;	// 16 = 0x10
    id _defaultValue;	// 24 = 0x18
}

+ (id)dateType;	// IMP=0x00200000000502d8
+ (id)stringType;	// IMP=0x0010000000050221
+ (id)dataType;	// IMP=0x001000000005016a
+ (id)integerType;	// IMP=0x00100000000500ae
- (void).cxx_destruct;	// IMP=0x00200000000509e7
- (id)rawInjectionForValue:(id)arg1;	// IMP=0x0010000000050890
- (id)_valueForBindableValue:(id)arg1;	// IMP=0x00100000000506ba
- (id)_bindableValueForValue:(id)arg1;	// IMP=0x00100000000504e4
- (id)redactedDescription;	// IMP=0x00100000000504d2
@property(readonly, copy) NSString *description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x0010000000050422
- (id)defaultValueForNull;	// IMP=0x0010000000050414
@property(readonly, nonatomic) NSData *sql;
- (Class)objcClass;	// IMP=0x00100000000503f0
- (id)initWithTypeName:(const char *)arg1 defaultValue:(id)arg2 objcClass:(Class)arg3;	// IMP=0x001000000005032d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

