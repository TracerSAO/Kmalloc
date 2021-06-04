# Kmalloc

> Kmalloc 构建了一个替代的内存分配库（类似 malloc() 和 free(), 但具有不同的名称），
> 项目是根据 Operatiing Systems 书籍中所提供的 "F.3 内存分配库" Lab 进行的相关开发

实现了基础的开发要求：
- [x] 使用 mmap() 进行匿名内存申请
- [x] 采用 “首次匹配” 算法进行内存分配
- [x] 提供了 C 库中 malloc() 和 free() 所提供的所有基本功能

挖坑：
- [ ] 实现 “伙伴算法” 对内存分配进行管理
