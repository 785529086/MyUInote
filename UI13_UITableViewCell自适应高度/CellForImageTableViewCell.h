//
//  CellForImageTableViewCell.h
//  UI13_UITableViewCell自适应高度
//
//  Created by dllo on 15/12/29.
//  Copyright © 2015年 lanou.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CellForImageTableViewCell : UITableViewCell

@property (nonatomic, retain) UIImageView *imageViewForPic;

+ (CGFloat)heightForCellWithName:(NSString *)name;

@end
