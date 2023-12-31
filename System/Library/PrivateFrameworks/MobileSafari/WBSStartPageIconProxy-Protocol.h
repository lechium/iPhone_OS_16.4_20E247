//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class NSString, UIImage, WebBookmark;

@protocol WBSStartPageIconProxy <NSObject>
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;
- (void)setIconFromBookmark:(WebBookmark *)arg1;
@end

