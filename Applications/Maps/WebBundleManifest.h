//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface WebBundleManifest : NSObject
{
    NSString *_version;	// 8 = 0x8
    NSSet *_files;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000009382d9
- (void).cxx_destruct;	// IMP=0x00200000009384df
@property(retain, nonatomic) NSSet *files; // @synthesize files=_files;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000093836e
- (unsigned long long)hash;	// IMP=0x00100000009382e1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000093826b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000938134
- (id)initWithVersion:(id)arg1 files:(id)arg2;	// IMP=0x0010000000938096

@end

