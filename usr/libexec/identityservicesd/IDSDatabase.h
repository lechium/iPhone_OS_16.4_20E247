//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSDatabase : NSObject
{
    unsigned int _dataProtectionClass;	// 8 = 0x8
    NSString *_filename;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000070a7e0
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
- (void)deleteDatabase;	// IMP=0x001000000070a6d0
- (void)ensureDatabaseIsInitialized;	// IMP=0x001000000070a440
- (id)initWithDataProtectionClass:(unsigned int)arg1 filename:(id)arg2;	// IMP=0x001000000070a360
- (id)initWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x001000000070a300
- (id)init;	// IMP=0x001000000070a2a0

@end
