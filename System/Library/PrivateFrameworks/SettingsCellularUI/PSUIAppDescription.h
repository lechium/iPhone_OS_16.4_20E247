//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface PSUIAppDescription : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_publisher;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_persistentID;	// 32 = 0x20
    UIImage *_icon;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000048c88
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000048b7f

@end
